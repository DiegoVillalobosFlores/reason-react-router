[%bs.raw {|require('./index.css')|}];

[@bs.module "./registerServiceWorker"] external register_service_worker : unit => unit = "default";

let renderForRoute = (element) =>
    ReactDOMRe.renderToElementWithId(element, "root");

let router =
    DirectorRe.makeRouter({
        "/" : () => renderForRoute(<App message="GG"/>),
        "/pene": () => renderForRoute(<Pene/>)
    });

DirectorRe.init(router,"/");

register_service_worker();

