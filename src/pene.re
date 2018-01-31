let component = ReasonReact.statelessComponent("Pene");

let make = (_children) => {
    ...component,
    render: (_self) => {
        <div>
            <h1>{ReasonReact.stringToElement("Pene")}</h1>
            <a href="#/">{ReasonReact.stringToElement("Home")}</a>
        </div>
    }
}