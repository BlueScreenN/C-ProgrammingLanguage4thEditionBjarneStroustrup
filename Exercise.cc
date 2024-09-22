// Bir 'Record' yapısı tanımlıyoruz. Bu, bağlı listelerde kullanılabilecek bir düğüm yapısıdır.
// İçinde 'int' türünde bir 'data' (veri) ve 'Record*' türünde bir işaretçi ('next') bulunur.
// 'next' işaretçisi, bir sonraki 'Record' düğümüne işaret eder.
struct Record {
    int data;        // 'data' bu düğümde saklanan veri (integer)
    Record* next;    // 'next', bir sonraki 'Record' düğümünün adresini tutan işaretçi
};

// 'Link' adında bir şablon (template) yapı tanımlıyoruz.
// Şablon yapılar farklı türlerde veri taşımak için kullanılır.
// 'Link' yapısının her bir düğümü 'value' ve 'next' işaretçisi içerir.
// 'T' burada bir şablon türüdür, yani 'value' herhangi bir türde olabilir.
template<typename T>
struct Link {
    T value;        // 'value', düğümde tutulan veri, bu veri 'T' türünde (şablon türü)
    Link* next;     // 'next', bir sonraki 'Link' düğümüne işaret eden işaretçi
};

int main() {
    // 'lst' adında bir işaretçi (pointer) tanımlıyoruz. Bu işaretçi 'Link<Record>' türünde.
    // Başlangıçta 'nullptr' ile işaretçi boş olarak atanıyor, yani hiçbir şeyi işaret etmiyor.
    // 'Link<Record>* lst' ifadesi, 'lst'nin 'Link<Record>' düğümlerine işaret edebileceğini belirtir.
    Link<Record>* lst = nullptr;  // Başlangıçta boş bir işaretçi
}
