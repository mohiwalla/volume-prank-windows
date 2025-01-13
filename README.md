# Prank app

The `main.exe` file unmutes the device, turns volume full and plays the audio file.
To use it, just update the `audio.wav` with custom audio file and share the built `main.exe` file with your friend.

## Build binary from source code

If you want to change something, make changes in `main.cc` file and run this command in terminal in the root of directory.

```bash
x86_64-w64-mingw32-g++ main.cc -o main.exe -lwinmm -static
```

## Testing locally

To test it locally before sharing, you can pass the volume argument in terminal to test it in low volume like this:

```bash
.\main.exe 5
```

If no argument is passed (like in real life scenario), 100 would be assumed.

~ mohiwalla
