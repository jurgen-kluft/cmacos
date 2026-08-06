package cmacos

import (
	denv "github.com/jurgen-kluft/go-ide/denv"
)

const (
	repo_path = "github.com\\jurgen-kluft\\"
	repo_name = "cmacos"
)

func GetPackage() *denv.Package {
	name := repo_name

	// main package
	mainpkg := denv.NewPackage(repo_path, repo_name)

	// main library
	mainlib := denv.SetupCppLibProject(mainpkg, name)
	addPlatformLibs(mainlib)

	mainpkg.AddMainLib(mainlib)
	return mainpkg
}

func addPlatformLibs(project *denv.DevProject) {
	if denv.IsMacOS() {
		project.AddLib("lib/macos", "metalirconverter")
	}
}
