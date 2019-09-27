.. raw:: html

  <h2>Description</h2>

This field contains the Community ID 
(https://github.com/corelight/community-id-spec) for the flow this event is
based on as base64-encoded string.
  
.. raw:: html

  <h2>Related configuration items</h2>

.. code-block:: yaml

  # enable/disable the community id feature.
  community-id: true
  # Seed value for the ID output. Valid values are 0-65535.
  community-id-seed: 42
  
The above configuration snippet is valid for Suricata versions 4.1.0 - 5.0.0.

.. raw:: html

   <h2>Example</h2>

.. code-block:: json
  :emphasize-lines: 11

  {
    "timestamp": "2014-04-26T16:16:58.654077+0000",
    "flow_id": 254068186086141,
    "pcap_cnt": 4,
    "event_type": "alert",
    "src_ip": "192.168.18.50",
    "src_port": 56981,
    "dest_ip": "74.125.239.97",
    "dest_port": 443,
    "proto": "006",
    "community_id": "1:mE7ZEe7S0SodvA7zTSzrLULJU3Y=",
    "alert": {
      "action": "allowed",
      "gid": 1,
      "signature_id": 122,
      "rev": 0,
      "signature": "FOO TCP-PKT",
      "category": "",
      "severity": 3
    },
    "flow": {
      "pkts_toserver": 1,
      "pkts_toclient": 0,
      "bytes_toserver": 78,
      "bytes_toclient": 0,
      "start": "2014-04-26T16:16:58.654077+0000"
    },
    "payload": "",
    "payload_printable": "",
    "stream": 0,
    "packet": "ZGazC4+CaKhtGGkOCABFAABAZAAAgQFtAEDAwQBAQgKGyWltgAAAAAEAgAA",
    "packet_info": {
      "linktype": 1
    },
    "pcap_filename": "/pcaps/smb2.pcap"
  }

.. raw:: html

  <h2>External references</h2>

- https://github.com/corelight/community-id-spec