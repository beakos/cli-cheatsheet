# CMD & powershell command list
This is a list of basic script commands for CMD & powershell.

# CMD Cleanup Commands
- `Dism /Online /Cleanup-Image /CheckHealth`

- `Dism /Online /Cleanup-Image /ScanHealth`

- `Dism /Online /Cleanup-Image /RestoreHealth`

- `sfc /SCANNOW` Checks for integrity violations

# CMD Check History
Press the `F7` key on the keyboard. Restarting the session will lose all commands used in session, all CMD sessions are volitile.

# DISKPART Commands
- `list disk` // lists all the drives
- `select disk` // selects the target disk (you must enter the number after sleect disk)
- `clean`
- `create partition`
- `select partition`
- `active`
- `format`
- `assign`
- `exit`
https://askubuntu.com/questions/921046/how-to-remove-ubuntu-from-boot-menu-after-deleting-ubuntu-partition-in-windows

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

# Winget Upgrading Packages
`winget list` lists all packages
`winget upgrade --all` upgrades all packages
`winget --help` lists all usable commands and queries
`winget upgrade --include unknown` upgrades all packages without warning
`winget upgrade --force` upgrades all packages without checking hashes or avoiding warnings