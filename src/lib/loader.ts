import { ref } from "vue";

export function useMarkdownLoader(filePath: string) {
    const text = ref('');

    const loadMarkdown = async () => {
        try {
            const response = await fetch(filePath);
            if (!response.ok) {
                throw new Error('Network response was not ok');
            }
            text.value = await response.text();
        } catch (error) {
            console.error('Error loading markdown file:', error);
        }
    };

    return { text, loadMarkdown };
}

export function useCodeLoader(filePath: string) {
    const code = ref('');

    const loadCode = async () => {
        try {
            const response = await fetch(filePath);
            if (!response.ok) {
                throw new Error('Network response was not ok');
            }
            code.value = await response.text();
        } catch (error) {
            console.error('Error loading code file:', error);
        }
    };

    return { code, loadCode };
}