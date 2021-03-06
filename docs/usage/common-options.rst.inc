-h, --help         show this help message and exit
--critical         work on log level CRITICAL
--error            work on log level ERROR
--warning          work on log level WARNING (default)
--info, -v, --verbose    work on log level INFO
--debug            enable debug output, work on log level DEBUG
--debug-topic TOPIC    enable TOPIC debugging (can be specified multiple times). The logger path is borg.debug.<TOPIC> if TOPIC is not fully qualified.
-p, --progress     show progress information
--log-json         Output one JSON object per log line instead of formatted text.
--lock-wait SECONDS    wait at most SECONDS for acquiring a repository/cache lock (default: 1).
--show-version     show/log the borg version
--show-rc          show/log the return code (rc)
--umask M          set umask to M (local and remote, default: 0077)
--remote-path PATH    use PATH as borg executable on the remote (default: "borg")
--remote-ratelimit RATE    set remote network upload rate limit in kiByte/s (default: 0=unlimited)
--consider-part-files    treat part files like normal files (e.g. to list/extract them)
--debug-profile FILE    Write execution profile in Borg format into FILE. For local use a Python-compatible file can be generated by suffixing FILE with ".pyprof".
--rsh RSH          Use this command to connect to the 'borg serve' process (default: 'ssh')
