import React from "react";
import "./index.css";

const Base = ({
  title = "My title",
  description = "My description",
  children,
}) => {
  return (
    <div>
      <header className="header bg-dark  py-2">
        <div className="container-fluid bg-olivedrab text-center">
          <h1 className="font-family-cursive p-2">The Greatest Jungle Book</h1>
        </div>
      </header>
      <div className="container-fluid p-2">
        <div className="flex-stretch bg-secondary text-white text-center">
          <h2 className="display-4 py-20">{title}</h2>
          <p className="lead">{description}</p>
          <div>{children}</div>
        </div>
      </div>
      <footer className="footer bg-dark mt-auto py-2">
        <div className="container-fluid bg-info text-white text-center py-1">
          <h4>If you got any questions, feel free to reach out!</h4>
          <button className="btn btn-danger btn-sm rounded">Contact Us</button>
        </div>
        <div className="container">
          <span className="text-muted">
            SAVE <span className="text-white"> JUNGLES </span>
            SAVE <span className="text-white"> ANIMALS !</span>
          </span>
        </div>
      </footer>
    </div>
  );
};

export default Base;
