package main;

import "fmt";

func main() {
    var x int = 10;
    var y float64 = 20.5;
    var z int = x + y; // Type mismatch
    fmt.Println(z);
}