import React from "react";
import { useLocation } from "react-router-dom";
import Base from "./Base";
import "./index.css";

const Animal = () => {
  let location = useLocation();

  const frame = () => {
    return (
      <div className="flex bg-white">
        <div className="p-1 m-1">
          <img src={location.state[0].imgSRC} alt="Not Found" />
        </div>
        <hr />
        <div className="m-1">
          <p className="lead">{location.state[0].description}</p>
        </div>
      </div>
    );
  };
  
  return (
    <Base
      title={location.state[0].name}
      description="I welcome you to read about me"
    >
      {frame()}
    </Base>
  );
};

export default Animal;
