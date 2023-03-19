# Setup

### Create a repository from this template

1. Click the big green button `Use this template` or click <a href="../../generate">here</a>.
1. Enter a Repository name and click `Create repository from template`
1. Head over to the created repository and complete the setup.

### Complete setup

#### Get Workflow access

1. Enable read and write workflow permissions for this repo at the bottom of the page <a href="../../settings/actions">here</a>

OR
1. Go to the <a href="https://github.com/settings/personal-access-tokens/new">personal access token</a> page
1. Under `Repository access`, select `All repositories` or select this repository under `Only select repositories`
1. Under `Permissions > Repository Permissions > Workflows`, select `Read and write` access
1. Generate your token
1. Copy the token. Save this somewhere if you want to reuse this token later
1. Create <a href="../../settings/secrets/actions/new">a new repository secret</a> named `REPO_SETUP_TOKEN` and paste your token there
#### Initialize the workflow

1. Trigger the initialization workflow by <a href="../../issues/new?template=initialize.yml&title=INIT">creating a new init issue</a>
1. Wait for the workflow to complete