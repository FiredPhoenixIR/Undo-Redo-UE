# Undo-Redo-UE
 How to do undo and redo in unreal engine ( voxel tool )

Explanation of the Code:
VoxelCommand.h: Defines the base interface for commands that support execution and undo functionality.

AddVoxelCommand.h / .cpp: Implements the logic to add a voxel and then undo that operation by removing it.

RemoveVoxelCommand.h / .cpp: Implements the logic to remove a voxel and undo that by re-adding the voxel.

CommandManager.h / .cpp: Manages the execution of commands and maintains the stacks for undo and redo operations.

VoxelEditor.h / .cpp: Integrates the command pattern into your voxel editor, allowing voxel operations to be undone and redone.

Integration in Unreal Engine
Ensure that the voxel operations (AddVoxel and RemoveVoxel) in your VoxelWorld class are thread-safe and efficient since they will be called frequently during undo/redo operations.
This system allows you to add more complex operations by extending the VoxelCommand class and creating more specific commands.
This design should give you a robust and flexible undo/redo system for your voxel-based Unreal Engine plugin.