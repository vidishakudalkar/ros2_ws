from setuptools import find_packages
from setuptools import setup

setup(
    name='simulator_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('simulator_interfaces', 'simulator_interfaces.*')),
)
