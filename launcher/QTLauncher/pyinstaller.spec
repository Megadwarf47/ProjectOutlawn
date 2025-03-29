from PyInstaller.utils.hooks import collect_data_files
from PyInstaller import __main__
from PyInstaller.building.build_main import Analysis, EXE, COLLECT
import os

# Specify the entry script and app name
script_name = 'main.py'
app_name = 'outlawn-launcher'

# Specify your binary directory
binary_dir = r'D:\a\ProjectOutlawn\ProjectOutlawn\ProjectOutlawn\launcher\QTLauncher'

# Collect data files (e.g., configuration files)
data_files = collect_data_files('PyQt6')

# Collect binaries
binaries = [(binary_dir, '.')]  # Use '.' to place binaries in the top-level directory
for root, dirs, files in os.walk(binary_dir):
    for file in files:
        binaries.append((os.path.join(root, file), os.path.relpath(root, binary_dir)))

# Analysis step
a = Analysis(
    [script_name],
    pathex=['.'],
    binaries=binaries,
    datas=data_files,
    hiddenimports=[],
)

# Build the application
exe = EXE(
    a.pure,
    a.scripts,
    [],
    exclude_binaries=False,
    name=app_name,
    console=False,  # Set to True if you need a console window
    icon='icon.ico',  # Optional icon for the app
)

# Collect the files into the final app bundle
coll = COLLECT(
    exe,
    a.binaries,
    a.zipfiles,
    a.datas,
    strip=False,
    upx=True,
    name=app_name,
)
