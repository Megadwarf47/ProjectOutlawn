# -*- mode: python ; coding: utf-8 -*-

from PyInstaller.utils.hooks import collect_submodules

block_cipher = None

a = Analysis(
    ['main.py'],
    pathex=[],
    binaries=[],
    datas=[
        ('assets/gw1.jpg', '.'),
        ('assets/gw2.jpg', '.'),
        ('assets/icon.ico', '.')
    ],
    # Collect all necessary submodules
    hiddenimports = (
    collect_submodules('PyQt6') +
    collect_submodules('pyaml') +
    collect_submodules('requests') +
    collect_submodules('idna') +  # requests dependency
    collect_submodules('urllib3') +  # requests dependency
    collect_submodules('chardet') +  # fallback requests dependency
    collect_submodules('certifi') +  # requests SSL certs
    ['server_browser_window']
)
    hookspath=[],
    runtime_hooks=[],
    excludes=[],
    win_no_prefer_redirects=False,
    win_private_assemblies=False,
    cipher=block_cipher,
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
