package main;

import "fmt";

func main() {
	var x int = 10;
	var y float64 = 3.14;
	var z string = "hello";

	if x > 5 && y < 4.0 {
		fmt.Println(z);
	} else {
		fmt.Println("error");
	}

	for i := 0; i < 10; i++ {
		fmt.Println(i);
	}
}