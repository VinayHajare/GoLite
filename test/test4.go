package main;

import "fmt";

type Person struct {
    name string;
    age  int;
};

func main() {
    var p Person;
    p.name = "Alice";
    p.age = 30;

    if p.age > 25 {
        fmt.Println(p.name, "is older than 25");
    } else {
        fmt.Println(p.name, "is younger than 25");
    }
}