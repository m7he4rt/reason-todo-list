module StyledComponent = [%styled.div
  {|
  display: flex;
  justify-content: center;
  align-items: center;
  color: #9409ff;

  height: 100vh;
  width: 100vw;
|}
];

let rs = React.string;

[@react.component]
let make = () => <StyledComponent> {"Hello!" |> rs} </StyledComponent>;
