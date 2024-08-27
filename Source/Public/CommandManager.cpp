#include "CommandManager.h"

void CommandManager::ExecuteCommand(TSharedPtr<VoxelCommand> Command)
{
    if (Command.IsValid())
    {
        Command->Execute();
        UndoStack.Push(Command);
        RedoStack.Empty();  // Clear redo stack whenever a new command is executed
    }
}

void CommandManager::Undo()
{
    if (UndoStack.Num() > 0)
    {
        TSharedPtr<VoxelCommand> Command = UndoStack.Pop();
        if (Command.IsValid())
        {
            Command->Undo();
            RedoStack.Push(Command);
        }
    }
}

void CommandManager::Redo()
{
    if (RedoStack.Num() > 0)
    {
        TSharedPtr<VoxelCommand> Command = RedoStack.Pop();
        if (Command.IsValid())
        {
            Command->Execute();
            UndoStack.Push(Command);
        }
    }
}
