--- plugins/builtin/source/content/views/view_hex_editor.cpp.orig	2022-07-16 11:41:37 UTC
+++ plugins/builtin/source/content/views/view_hex_editor.cpp
@@ -203,7 +203,7 @@ namespace hex::plugin::builtin {
                 reader.seek(this->m_searchPosition.value_or(editor->getSelection().getEndAddress()));
 
             constexpr static auto searchFunction = [](const auto &haystackBegin, const auto &haystackEnd, const auto &needleBegin, const auto &needleEnd) {
-                return std::search(haystackBegin, haystackEnd, std::boyer_moore_horspool_searcher(needleBegin, needleEnd));
+                return std::search(haystackBegin, haystackEnd, needleBegin, needleEnd);
             };
 
             if (!backwards) {
