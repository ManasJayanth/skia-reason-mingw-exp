external foo_ext: unit => int = "caml_foo"

let foo = () => {
Printf.printf("External foo(): %d\n") @@ foo_ext();
print_endline("Hello");
}

