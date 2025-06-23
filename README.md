# openclass

## Motivation

- Learn more, create more, and share more.

## What I learned

1. Archive the resources of the couse on time. Official website will update its content, 
    and the resources may be lost. All resources should be classified carefully, such as 
    
    - slides
    - assignments
    - projects
    - lecture code for practice
    - etc.

    And the resources should initially commit to the repo, modifications should be otherwise recorded.

    Commit message template:
    ```
    [class_name]-[type]: [short description of the commit]
    ```

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