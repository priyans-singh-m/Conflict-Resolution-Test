#include <iostream>
#include <string>

using namespace std;

int main() {
    string paragraph = R"(Commit Message Best Practices
Best practices for writing Git commit messages emphasize clarity, consistency, and structure. Here are key guidelines:
Subject-First Approach: Start with a concise summary of the change, ideally under 50 characters, to ensure readability in tools like GitLens, GitHub, or VSCode, which typically display only the first line of a commit message. For example, "Fix bug in login flow" clearly states the purpose without unnecessary detail.
Imperative Mood: Use the imperative form (e.g., "Fix" instead of "Fixed") to align with Git's convention. This makes the message actionable and consistent with how Git interprets changes, as if the commit is about to be applied.
Conventional Commits: Adopt the Conventional Commits specification, which structures messages with a type (e.g., feat, fix), optional scope, and a description. This format supports automated tools for generating changelogs and determining semantic versioning (e.g., feat(authentication): add Google login).
Avoid File Mentions: Refrain from including file names in commit messages since Git already tracks modified files. Instead, focus on the intent behind the change, such as "Improve sidebar menu layout" rather than "Update layout.css".
Body and Footer: For complex changes, add a body to explain the "why" and "what" of the change, and use the footer to reference issues (e.g., "Refs: #1234") or breaking changes (e.g., "BREAKING CHANGE: Update API response structure").
Consistency Across Teams: Establish team-wide conventions, such as including a ticket number (e.g., feature/SHOP-123) or a developer's initials, to streamline branch and commit tracking in collaborative environments.
Avoid Redundancy: Focus on meaningful descriptions rather than generic phrases like "Update README" or "Fix bug #67". Instead, specify the impact, such as "Fix incorrect error handling in API response".
Reverts and Breaking Changes: For reverts, use the revert type and reference the commit SHAs being reverted. For breaking changes, explicitly mark them in the footer to ensure proper versioning.
By following these practices, teams can maintain a clean, searchable commit history that enhances collaboration and simplifies long-term project maintenance.)";

    cout << paragraph << endl;

    return 0;
}