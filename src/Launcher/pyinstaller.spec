# -*- mode: python ; coding: utf-8 -*-

from PyInstaller.utils.hooks import collect_submodules

block_cipher = None

# Combine all required submodules
hiddenimports = (
    collect_submodules('PyQt6') +
    collect_submodules('pyaml') +
    collect_submodules('requests') +
    ['server_browser_window'] +
    # Additional explicit dependencies
    [
        'PyQt6.QtCore',
        'PyQt6.QtGui',
        'PyQt6.QtWidgets',
        'yaml',                # pyaml dependency
        'urllib3',             # requests dependency
        'chardet',             # requests dependency
        'idna',                # requests dependency
        'certifi',             # requests dependency
        'socket',              # common networking dependency
        'ssl',                 # SSL support
        'json',                # JSON handling
        'sys',                 # system module
        'os',                  # operating system module
        'logging'              # logging module
    ]
)

pyz = PYZ(a.pure, a.zipped_data, cipher=block_cipher)

exe = EXE(
    pyz,
    a.scripts,
    a.binaries,
    a.zipfiles,
    a.datas,
    [],
    name='main',
    debug=False,
    bootloader_ignore_signals=False,
    strip=False,
    upx=True,
    console=False,
    icon='assets/icon.ico'
)
