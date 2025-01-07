package main;

import "fmt";

type Speaker interface {
    Speak() string;
};

type Person struct {
    name string;
    age  int;
};

func (p Person) Speak() string {
    return p.name + " is speaking.";
}

func main() {
    var p Person;
    p.name = "Alice";
    p.age = 30;

    var s Speaker = p;
    fmt.Println(s.Speak());

    if p.age > 25 {
        fmt.Println(p.name, "is older than 25");
    } else {
        fmt.Println(p.name, "is younger than 25");
    }
}
