package cmacos

import (
	denv "github.com/jurgen-kluft/ccode/denv"
)

const (
	repo_path = "github.com\\jurgen-kluft\\"
	repo_name = "cmacos"
)

func GetPackage() *denv.Package {
	name := repo_name

	// The main (cmacos) package
	mainpkg := denv.NewPackage(name)

	// library
	mainlib := denv.SetupDefaultCppLibProjectWithLibs(name, repo_path+name, getPlatformLibs())

	mainpkg.AddMainLib(mainlib)
	return mainpkg
}

func getPlatformLibs() []*denv.Lib {
	if denv.IsMacOS() {
		macLibs := []*denv.Lib{
			{Configs: denv.ConfigTypeAll, Type: denv.UserLibrary, Files: []string{"metalirconverter"}, Dir: "lib/macos"},
		}
		return macLibs
	}
	return []*denv.Lib{}
}
