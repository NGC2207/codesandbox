<script setup lang="ts">
import Console from '@/components/Console.vue';
import CodeEditor from '@/components/CodeEditor.vue';
import Switch from '@/components/ui/switch/Switch.vue';
import MarkdownPreview from '@/components/MarkdownPreview.vue';
import { Avatar, AvatarImage, AvatarFallback } from '@/components/ui/avatar';
import { CommandLineIcon, DocumentTextIcon } from '@heroicons/vue/24/outline';

import {
  ResizableHandle,
  ResizablePanel,
  ResizablePanelGroup,
} from '@/components/ui/resizable';
</script>

<template>
  <div class="flex min-h-full flex-col h-full">
    <header class="shrink-0 border-b">
      <div class="mx-auto flex h-16 items-center justify-between px-4 sm:px-6 lg:px-8">
        <img class="h-12 w-auto" src="/logo.svg" alt="Litchi" />
        <div class="flex items-center gap-x-8">
          <Switch />
          <Avatar>
            <AvatarImage src="https://github.com/radix-vue.png" alt="@radix-vue" />
            <AvatarFallback>CN</AvatarFallback>
          </Avatar>
        </div>
      </div>
    </header>

    <div class="mx-auto flex w-full items-start gap-x-2 px-2 py-2 h-full">
      <ResizablePanelGroup direction="horizontal" class="flex w-full h-full">
        <ResizablePanel :default-size="33" class="flex-1 hidden lg:block">
          <aside class="sticky top-8 border h-full rounded-lg">
            <div class="flex flex-col h-full">
              <div class="h-8 flex items-center px-4 justify-start bg-slate-300 rounded-t-lg">
                <DocumentTextIcon class="h-6 w-auto text-cyan-500" />
                <span>题目描述</span>
              </div>
              <MarkdownPreview />
            </div>
          </aside>
        </ResizablePanel>
        <ResizableHandle class="hidden lg:block" />
        <ResizablePanel :default-size="66" class="flex-2">
          <main class="flex-grow border h-full rounded-lg">
            <div class="flex flex-col h-full">
              <div class="h-8 flex items-center px-4 bg-slate-300 rounded-t-lg">
                <CommandLineIcon class="h-6 w-auto text-cyan-500" />
                <span>代码</span>
              </div>
              <CodeEditor />
            </div>
          </main>
        </ResizablePanel>
        <ResizableHandle class="hidden xl:block" />
        <ResizablePanel :default-size="33" class="flex-1 hidden xl:block">
          <aside class="sticky top-8 border h-full rounded-lg">
            <Console />
          </aside>
        </ResizablePanel>
      </ResizablePanelGroup>
    </div>
  </div>
</template>