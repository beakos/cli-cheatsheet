# CMD & powershell command list
This is a list of basic script commands for CMD & powershell.

# CMD Cleanup Commands
- `Dism /Online /Cleanup-Image /CheckHealth`

- `Dism /Online /Cleanup-Image /ScanHealth`

- `Dism /Online /Cleanup-Image /RestoreHealth`

- `sfc /SCANNOW` Checks for integrity violations

# Fetch the battery report for Windows Systems (CMD)
Prints information in HTML format to determine the battery life cycle etc. 
`powercfg \batteryreport`

# Install programs with powershell
`wget` and add the install argument; program, script or link to download

# Install pip programs
`py -m pip install <package-name>`
`py -m pip <command> <args>`

# Powershell Scripts
Run the following scripts in administrator mode Powershell

## Chris Titus Script
`iwr -useb https://christitus.com/win | iex`
A script that has many powershell script commands by Chris Titus. 
`iwr -useb https://git.io/JJ8R4 | iex` This script leads to the old script GUI also made by Chris Titus.

## Windows10 Debloter Reddit Script 
- Step 1: Run `PS`
- Step 2: Run `iwr -useb https://git.io/debloat|iex`

# Winget Install
`winget <url>` and winget will install target source. If winget is not installed, Powershell should try to install automatically.