# Aegir SSH Keys

Allow users to upload their public SSH keys to Hostmaster to be granted access to server_master.

This module depends on the [SSH Key](https://www.drupal.org/project/sshkey) module from drupal.org.

## Behavior

Whenever anyone adds or updates an SSH key to their account, a *Verify* task is queued for Server Master.

When Server Master is verified, /var/aegir/.ssh/authorized_keys is written.

## Security Notes

This module takes ALL the SSH keys added to your hostmaster site and writes them to /var/aegir/.ssh/authorized_keys.

Ensure you assign the permission "Manage own SSH public keys" and "Manage any SSH public keys" very carefully.

Whoever is granted these permissions will gain SSH access to aegir@yourserver

## Manual Keys

To add to the keys that are added to authorized_keys without needing to log into hostmaster, you can create a file: `/var/aegir/.ssh/authorized_keys_manual`

On server_master verify, everything in this file will be included in `/var/aegir/.ssh/authorized_keys`

Warnings are output in the `authorized_keys` file about the risks of overwriting, and how to use the `authorized_keys_manual` file.