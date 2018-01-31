[%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./logo.svg";

[@bs.module "./Button"] external buttonRe : ReasonReact.reactClass = "default";

let component = ReasonReact.statelessComponent("App");

let make = (~message, _children) => {
  ...component,
  render: (_self) =>
    <div className="App">
      <div className="App-header">
        <img src=logo className="App-logo" alt="logo" />
        <h2> (ReasonReact.stringToElement(message)) </h2>
      </div>
      <p className="App-intro">
        <code> (ReasonReact.stringToElement(" Pinche asco es JavaScript ")) </code>
        <code> (ReasonReact.stringToElement(" #reason #ocaml ")) </code>
      </p>
      <a href="#/pene">{ReasonReact.stringToElement("Pene")}</a>
    </div>
};
