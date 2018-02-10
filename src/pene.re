
type ownership = {
    address: string,
    plate: string,
    name: string
};

type state = {
    owner: ownership
};

type action =
    | GetOwnerAddress;

let component = ReasonReact.reducerComponent("Pene");

let str = ReasonReact.stringToElement;

let make = (_children) => {
    ...component,
    initialState: () => {
        owner: {
            address: "0x6bEB8563d4C107e15278A88af38e9b799F6bb0B8",
            plate: "42069LEL",
            name: "Diego"
        }
    },
    reducer: (action, state) => {
        switch(action) {
            | GetOwnerAddress => ReasonReact.Update({...state,owner: {address: "lel",plate: "ño",name: "Dei"}})
        }
    },
    render: (self) => {
        <div>
            <h1>{str("Owner")}</h1>
            <a href="#/">{str("Home")}</a>
            <div>
                <button onClick={_event => self.send(GetOwnerAddress)}>(str("Get Owner"))</button>
                <p>(str(self.state.owner.name))</p>
            </div>
        </div>
    }
}