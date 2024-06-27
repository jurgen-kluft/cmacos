package main

import (
	ccode "github.com/jurgen-kluft/ccode/ccode-fixer"
	cpkg "github.com/jurgen-kluft/cmacos/package"
)

func main() {
	ccode.Init()
	ccode.GenerateFiles()
	ccode.Generate(cpkg.GetPackage(), ccode.NewDefaultFixrConfig())
}
