<template>
    <div class="h-full w-full">
        <vue-monaco-diff-editor theme="vs" :original="original" :modified="modified" language="c"
            :options="DIFF_EDITOR_OPTIONS" @mount="handleMount" />
    </div>
</template>

<script setup lang="ts">
import { shallowRef, onMounted } from 'vue';
import { useFileLoader } from '@/lib/loader';
import { DIFF_EDITOR_OPTIONS } from '@/config/editor';
import { loader, VueMonacoDiffEditor } from '@guolao/vue-monaco-editor';

loader.config({
    paths: {
        vs: 'https://cdn.jsdelivr.net/npm/monaco-editor@0.43.0/min/vs',
    },
})

const { content: original, loadFile: loadOriginalFile } = useFileLoader('/original.c');
const { content: modified, loadFile: loadModifiedFile } = useFileLoader('/modified.c');

const diffEditor = shallowRef();
const handleMount = (diffEditorInstance: any) => (diffEditor.value = diffEditorInstance);

onMounted(() => {
    loadOriginalFile();
    loadModifiedFile();
});
</script>

<script lang="ts">
export default {
    components: { VueMonacoDiffEditor },
}
</script>