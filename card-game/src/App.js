import React, { Component } from 'react';
import logo from './logo.svg';
import './App.css';
import CharacterCard from './CharacterCard';
import WordCard from './WordCard';

const word = "Hello";
class App extends Component {
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
      </div>
    );
  }
}

export default App;
