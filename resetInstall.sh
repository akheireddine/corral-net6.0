dotnet tool uninstall --global Corral
dotnet build source/Corral.sln
dotnet tool install --global Corral
dotnet tool install Corral --global --add-source ./source/nupkg/
