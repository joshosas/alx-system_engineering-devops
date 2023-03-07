# a puppet manifest that changes the OS configuration
# so that it is possible to login with the "holberton" user
# and open a file without any error message.
# Create holberton user

user { 'holberton':
  ensure => 'present',
}

# Add holberton user to sudoers file
file_line { 'holberton_sudo':
  path => '/etc/sudoers',
  line => 'holberton ALL=(ALL) NOPASSWD:ALL',
}

# Set file permissions to allow holberton user to open files
file { '/var/log/myfile.log':
  ensure  => 'file',
  mode    => '0644',
  owner   => 'root',
  group   => 'root',
  content => 'This is a sample file',
}
