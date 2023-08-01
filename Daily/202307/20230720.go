package main

import (
	"fmt"
)

func main() {
	var SA, SB string
	fmt.Scan(&SA, &SB)
	if len(SA) > len(SB) {
		fmt.Println("GREATER")
	} else if len(SA) < len(SB) {
		fmt.Println("LESS")
	} else {
		l := len(SA)
		for i := 0; i < l; i++ {
			if SA[i] > SB[i] {
				fmt.Println("GREATER")
				break
			} else if SA[i] < SB[i] {
				fmt.Println("LESS")
				break
			}

			if i == l-1 {
				fmt.Println("EQUAL")
				break
			}
		}
	}
}

// Web実行環境(Paiza)
// https://paiza.io/ja/projects/new

// 逆引きGolang (ファイル)
// https://ashitani.jp/golangtips/tips_file.html

// 逆引きGolang (文字列)
// https://ashitani.jp/golangtips/tips_string.html
