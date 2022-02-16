import React from "react";
import { BrowserRouter, Route, Routes } from "react-router-dom";
import Animal from "./Animal";
import Home from "./Home";

function CustomRoutes() {
  return (
    <BrowserRouter>
      <Routes>
        <Route path="/" exact element={<Home />} />
        <Route path="/animal" exact element={<Animal />} />
      </Routes>
    </BrowserRouter>
  );
}

export default CustomRoutes;
