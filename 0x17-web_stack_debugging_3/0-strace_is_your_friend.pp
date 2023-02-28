# a puppet script that applies fix to Apache server returning error 500
exec { 'fix-apache':
  command => "sed -i 's/phpp/php/g' /var/www/html/wp-settings.php",
  path    => ['/usr/bin', '/usr/sbin', '/bin']
  }
