package cmacos

import (
	denv "github.com/jurgen-kluft/ccode/denv"
	"github.com/jurgen-kluft/ccode/dev"
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
	mainlib := denv.SetupCppLibProjectWithLibs(mainpkg, name, getPlatformLibs())

	mainpkg.AddMainLib(mainlib)
	return mainpkg
}

func getPlatformLibs() []*denv.DevLib {
	if denv.IsMacOS() {
		macLibs := []*denv.DevLib{
			{BuildConfigs: dev.NewBuildAllConfigList(), LibType: dev.LibraryTypeUser, Files: []string{"metalirconverter"}, Dir: "lib/macos"},
		}
		return macLibs
	}
	return []*denv.DevLib{}
}
