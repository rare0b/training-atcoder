package main

import "fmt"

func main() {
    var N int
    fmt.Scan(&N)
	
	var ans int
	ans = 1
	for {
    	if ans * 2 > N {
			break
		}
		ans *= 2
    }
	
	fmt.Println(ans)
}
