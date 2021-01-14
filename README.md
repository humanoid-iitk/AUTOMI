# AUTOMI

Latest software for our humanoid robot.

## Use Guidelines

### 1. Fork and Clone the repo to your machine

Use the button on the top right to fork.

Clone the repo using:

```bash
git clone https://github.com/${your_username_here}/automi_v1
```

### Alternatively, download it as a zip file, And extract it using

```bash
unzip automi_v1.zip
```

### 2. Build

Place the project folder into your ros workspace and build using catkin_make.

### 3. FOR DEVELOPMENT PERIOD

1. Replace the file present at husky_description/urdf/ with "husky.urdf.xacro" present in this repo.

2. Run husky in playpen world:

```bash
roslaunch husky_gazebo playpen.launch
roslaunch husky_gazebo spawn_husky.launch   # on a separate terminal
```

3. Modify the launch file present in launch folder according to needs and run this:

```bash
roslaunch automi_v1 ${launch_file_name}
```

Remember to source devel/setup.bash

## Contribution Guidelines

### 1. Fork the repo on GitHub: Use the button at the top right

### 2. Clone the project to your own machine

```bash
git clone https://github.com/${your_username_here}/automi_v1
```

### 3. Commit changes to your own branch

Create a new branch by

```bash
git checkout -b ${your_branch_name}
 ```

### 4. Push your work back up to your fork

Navigate to the top-level repo directory and:

```bash
git add .
git commit -m "Explanative commit message"
git push origin ${your_branch_name}
```

### 5. Submit a Pull request so that we can review your changes

Create a new pull request from the `Pull Requests` tab on this repo, not the fork.


## Launch Histogram of depth

```bash
roslaunch husky_gazebo husky_playpen.launch
roslaunch automi_v1 depth.launch
```
Outputs: #Obstacles, Obstacle Width and angle to move(target at 40)
