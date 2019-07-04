# dune-c-example


[![CircleCI](https://circleci.com/gh/yourgithubhandle/dune-c-example/tree/master.svg?style=svg)](https://circleci.com/gh/yourgithubhandle/dune-c-example/tree/master)


**Contains the following libraries and executables:**

```
dune-c-example@0.0.0
│
├─test/
│   name:    TestDuneCExample.exe
│   require: dune-c-example/library
│
├─library/
│   library name: dune-c-example/library
│   require:
│
└─executable/
    name:    DuneCExampleApp.exe
    require: dune-c-example/library
```

## Developing:

```
npm install -g esy
git clone <this-repo>
esy install
esy build
```

## Running Binary:

After building the project, you can run the main binary that is produced.

```
esy x DuneCExampleApp.exe 
```

## Running Tests:

```
# Runs the "test" command in `package.json`.
esy test
```
