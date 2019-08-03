#pragma once

#include <string>
#include "note.hpp"
#include "draft_note.hpp"

class DraftNotesRepository {
   public:
    virtual void beginCreationSession() = 0;

    virtual void beginUpdateSession(Note note) = 0;

    virtual void endSession() = 0;

    virtual void updateTitle(std::string title) = 0;

    virtual void updateDescription(std::string description) = 0;

    virtual void clearDrafts() = 0;

    virtual void removeDraftCreation() = 0;

    virtual void removeDraftUpdate(int id) = 0;

    virtual std::optional<DraftNote> getDraftCreationNote() = 0;

    virtual std::optional<DraftNote> getDraftUpdateNote(int id) = 0;
};
