<template>
    <div class="h-full w-full">
        <vue-monaco-editor v-model:value="content" theme="vs" language="c" :options="CODE_EDITOR_OPTIONS"
            @mount="handleMount" />
    </div>
</template>

<script setup lang="ts">
import { shallowRef, onMounted } from 'vue';
import { useFileLoader } from '@/lib/loader';
import { CODE_EDITOR_OPTIONS } from '@/config/editor';
import { loader, VueMonacoEditor } from '@guolao/vue-monaco-editor';

loader.config({
    paths: {
        vs: 'https://cdn.jsdelivr.net/npm/monaco-editor@0.43.0/min/vs',
    },
})

const editor = shallowRef();
const { content, loadFile } = useFileLoader('/original.c');
const handleMount = (editorInstance: any) => (editor.value = editorInstance);

onMounted(() => {
    loadFile();
});
</script>

<script lang="ts">
export default {
    components: { VueMonacoEditor },
}
</script>