package main;

import "fmt";

type Person struct {
    name string;
    age  int;
};

type Speaker interface {
    Speak() string;
};

func Speak(name string) string {
    return "Hello, " + name + "!";
}

func main() {
    var age int = 30;
    var name string = "Alice";
    fmt.Println(Speak());

    if age > 25 {
        fmt.Println(p.name, "is older than 25");
    } else {
        fmt.Println(p.name, "is younger than 25");
    }
}

