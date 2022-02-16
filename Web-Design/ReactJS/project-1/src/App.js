import React, { useState } from "react";
import "./App.css";

function App() {
  const [message, setMessage] = useState("");

  const showMessage = () => {
    setMessage("Hello Wolrd!");
  };

  const hideMessage = () => {
    setMessage("");
  };
  return (
    <div className="main bg-success text-white rounded">
      <h1>Welcome to the first react project !</h1>

      <div className="container bg-warning border-radius-4">
        <div className="div flex-direction-column">
          <p className="message"> {message}</p>
        </div>

        <div className="div">
          <button type="button" class="btn btn-secondary" onClick={showMessage}>
            Show Message
          </button>
          <button type="button" class="btn btn-secondary" onClick={hideMessage}>
            Hide Message
          </button>
        </div>
      </div>
    </div>
  );
}

export default App;
