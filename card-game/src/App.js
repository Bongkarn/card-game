import React, { Component } from 'react';
import logo from './logo.svg';
import './App.css';
import CharacterCard from './CharacterCard';
import WordCard from './WordCard';

const word = "MOBILE";
class App extends Component {
  login(){
    alert("## Welcome ##")
}
  render() {
    return (
      <div className="App">
        <div className="App">
          <div className="App-header">
            <h2>Word Games</h2>
          </div>
        </div>
        <WordCard value={word}/>
        <img src={logo} className="App-logo" alt="logo"/>
        <br></br>Name: <input type="string" onBlur={this.onBlur} /><button onClick={this.login}>login</button>
      </div>
    );
  }
}

export default App;
