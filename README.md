# openclass
Code repo for open classes in learning process

## Update

### 20250621

I used to use git to store cs231n and cs106l's slides, but given consideration of the size of the repo,
I decided to use a cloud disk to store them. So I removed the slides from this repo by rolling back to the commit before commit these slides.

I did this by
```bash
git reset --hard a7b4f25ec86cb06f136079e4e8380c77118d217f
git push origin HEAD --force

git reflog expire --expire=now --all
git gc --prune=now --aggressive
```

I believe this can keep this repo clean and small.