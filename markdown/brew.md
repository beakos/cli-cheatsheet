# Brew Commands:
## Display the version of Homebrew.
`brew --version`
## Print Help Information
`brew help`
## Print Help Info for a brew command
`brew help <sub-command>`
## Check system for potential problems.
`brew doctor`

 # Main usage:
  `brew search TEXT|/REGEX/`
  `brew info [FORMULA|CASK...]`
  `brew install FORMULA|CASK...`
  `brew update`
  `brew upgrade [FORMULA|CASK...]`
  `brew uninstall FORMULA|CASK...`
  `brew list [FORMULA|CASK...]`

 # Troubleshooting:
  `brew config`
  `brew doctor`
  `brew install --verbose --debug FORMULA|CASK`

# Contributing:
  `brew create URL [--no-fetch]`
  `brew edit [FORMULA|CASK...]`

# Further help:
  `brew commands`
  `brew help [COMMAND]`
  `man brew`
  https://docs.brew.sh

 # Brew Update
 # Fetch latest version of homebrew and formula
$ brew update
# Show formulae with an updated version available
$ brew outdated
# Upgrade all outdated and unpinned brews
$ brew upgrade
# Upgrade only the specified brew
$ brew upgrade <formula>
# Prevent the specified formulae from being upgraded
$ brew pin <formula>
# Allow the specified formulae to be upgraded.
$ brew unpin <formula>

# Brew Repositories // It is possible to add additional repositories to homebrew by making use of the brew tap command. This allows you to install additional applications that does not form part of the default set of repositories.
# List all the current tapped repositories (taps)
$ brew tap
# Tap a formula repository from Github using https for tap https://github.com/user/homebrew-repo
$ brew tap <user/repo>
# Tap a formula repository from the specified URL
$ brew tap <user/repo> <URL>
# Remove the given tap from the repository
$ brew untap <user/repo>

# Brew Cask // Homebrew Cask provides a friendly CLI workflow for the administration of macOS applications distributed as binaries.
# Tap the Cask repository from Github.
$ brew tap homebrew/cask
# List all the installed casks .
$ brew cask list
# Search all known casks based on the substring text.
$ brew search <text>
# Install the given cask.
$ brew cask install <cask>
# Reinstalls the given Cask
$ brew cask reinstall <cask>
# Uninstall the given cask.
$ brew cask uninstall <cask>

# Brew Search, Install and Remove // The following commands are used to search, list and install the different applications and tools that are available within the Homebrew repository.
# List all the installed formulae.
$ brew list
# Display all locally available formulae for brewing.
$ brew search
# Perform a substring search of formulae names for brewing.
$ brew search <text>
# Display information about the formula.
$ brew info <formula>
# Install the formula.
$ brew install <formula>
# Uninstall the formula.
$ brew uninstall <formula>

  # Brew Cleanup // Remove stale lock files and outdated downloads for formulae and casks, and remove old versions of installed formulae.

  # Remove older versions of installed formulae.
$ brew cleanup
# Remove older versions of specified formula.
$ brew cleanup <formula>
# Display all formula that will be removed (dry run)
$ brew cleanup -n




