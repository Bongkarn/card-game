import React, { Component } from 'react';
import CharacterCard from './CharacterCard';
import _ from 'lodash';

const prepareStateFromWord = (given_word) => {
 let word = given_word.toUpperCase()
 let chars = _.shuffle(Array.from(word))
 return {
 word,
 chars,
 attempt: 1,
 guess: [],
 completed: false
 }
}
export default class WordCard extends Component {
    constructor(props){
        super(props)
        this.state = prepareStateFromWord(this.props.value)
    }
    activationHandler = (c) => {
        let guess = [...this.state.guess, c]
        this.setState({guess})
        if(guess.length == this.state.chars.length){
        if(guess.join('').toString() == this.state.word){
        this.setState({guess: [], completed: true ,attempt: this.state.attempt + 1})
        alert("Complete!!");
        }else{
        this.setState({guess: [], attempt: this.state.attempt + 1})
        alert("Fail!!");
        }
        }
       }
render() {
 return (
 <div>
 {Array.from(this.state.chars).map((c,i) => <CharacterCard value={c} key={i} attempt={this.state.attempt} activationHandler={this.activationHandler} />)}
 <p>Round: {this.state.attempt}</p>
 <p>Bongkarn Jongmee 5910110177</p>
 </div>
);
}
}
