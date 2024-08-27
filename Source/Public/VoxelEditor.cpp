#include "VoxelEditor.h"
#include "AddVoxelCommand.h"
#include "RemoveVoxelCommand.h"
#include "VoxelWorld.h"

VoxelEditor::VoxelEditor(VoxelWorld* InWorld)
    : World(InWorld)
{
    CmdManager = new CommandManager();
}

void VoxelEditor::AddVoxel(const FVector& Position)
{
    TSharedPtr<VoxelCommand> Command = MakeShareable(new AddVoxelCommand(World, Position));
    CmdManager->ExecuteCommand(Command);
}

void VoxelEditor::RemoveVoxel(const FVector& Position)
{
    TSharedPtr<VoxelCommand> Command = MakeShareable(new RemoveVoxelCommand(World, Position));
    CmdManager->ExecuteCommand(Command);
}

void VoxelEditor::Undo()
{
    CmdManager->Undo();
}

void VoxelEditor::Redo()
{
    CmdManager->Redo();
}
