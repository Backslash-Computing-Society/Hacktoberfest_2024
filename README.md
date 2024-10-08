## Hacktoberfest-2024
    

# Submit your PR on this new repo [Hacktoberfest](https://github.com/Backslash-Computing-Society/Hacktoberfest_2024). We are merging all PRs there.

In this current repo, there are a lot of conflicts; we are not merging until all conflicts are resolved. Hacktoberfest { [Live Website](https://fineanmol.github.io/Hacktoberfest2024/) }

**This is a beginner-friendly project to help you get started with your [Hacktoberfest](https://hacktoberfest.com/). Please read the contribution rules. Happy Learning <3 💙 !!**

P.S. Star ⭐ and share this repository if you had fun!! 😍

Hacktoberfest 2024


# Contribution Rules📚:

- You are allowed to make pull requests that break the rules. We just merge it ;)
- Do NOT add any build steps, e.g., npm install (we want to keep this a simple static site)
- Do NOT remove other content.
- Styling/code can be pretty, ugly, or stupid, big or small, as long as it works
<!-- - Add your name to the contributorsList file. -->
- Try to keep pull requests small to minimize merge conflicts

## Getting Started 🤩🤗:

- Fork this repo (button on top)
- Clone it on your local machine

```terminal
git clone https://github.com/fineanmol/Hacktoberfest2024.git
```

- Navigate to the project directory.

```terminal
cd Hacktoberfest2024
```

- Create a new branch

```markdown
git checkout -b my-new-branch
```

<!--- - Add your name to `contributors/contributorsList.js`. -->

```markdown
git add .
```

- Commit your changes.

```markdown
git commit -m "Relevant message"
```

- Then push

```markdown
git push origin my-new-branch
```

- Create a new pull request from your forked repository


## Avoid Conflicts {Syncing your fork}

An easy way to avoid conflicts is to add an 'upstream' for your git repo, as other PRs may be merged while you're working on your branch/fork.   

```terminal
git remote add upstream https://github.com/fineanmol/Hacktoberfest2024
```

You can verify that the new remote has been added by typing:

```terminal
git remote -v
```

To pull any new changes from your parent repo, simply run:

```terminal
git merge upstream/master
```

This will give you any eventual conflicts and allow you to easily solve them in your repo. It's a good idea to use it frequently in between your own commits to make sure that your repo is up to date with its parent.

For more information on syncing forks, [read this article from GitHub](https://help.github.com/articles/syncing-a-fork/).
